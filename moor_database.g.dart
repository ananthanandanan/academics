// GENERATED CODE - DO NOT MODIFY BY HAND

part of 'moor_database.dart';

// **************************************************************************
// MoorGenerator
// **************************************************************************

// ignore_for_file: unnecessary_brace_in_string_interps, unnecessary_this
class TreesTableData extends DataClass
    implements Insertable<TreesTableData> {
  final int id;
  final String name;
  final String image;
  final String description;
  TreesTableData(
      {this.id,
      @required this.name,
      @required this.image,
      @required this.description});
  factory TreesTableData.fromData(
      Map<String, dynamic> data, GeneratedDatabase db,
      {String prefix}) {
    final effectivePrefix = prefix ?? '';
    final intType = db.typeSystem.forDartType<int>();
    final stringType = db.typeSystem.forDartType<String>();
    return TreesTableData(
      id: intType.mapFromDatabaseResponse(data['${effectivePrefix}id']),
      name: stringType.mapFromDatabaseResponse(data['${effectivePrefix}name']),
      image:
          stringType.mapFromDatabaseResponse(data['${effectivePrefix}image']),
      description: stringType.mapFromDatabaseResponse(data['${effectivePrefix}dose']),
    );
  }
  factory TreesTableData.fromJson(Map<String, dynamic> json,
      {ValueSerializer serializer = const ValueSerializer.defaults()}) {
    return TreesTableData(
      id: serializer.fromJson<int>(json['id']),
      name: serializer.fromJson<String>(json['name']),
      image: serializer.fromJson<String>(json['image']),
      description: serializer.fromJson<String>(json['dose']),
    );
  }
  @override
  Map<String, dynamic> toJson(
      {ValueSerializer serializer = const ValueSerializer.defaults()}) {
    return {
      'id': serializer.toJson<int>(id),
      'name': serializer.toJson<String>(name),
      'image': serializer.toJson<String>(image),
      'dose': serializer.toJson<String>(description),
    };
  }

  @override
  MedicinesTableCompanion createCompanion(bool nullToAbsent) {
    return MedicinesTableCompanion(
      id: id == null && nullToAbsent ? const Value.absent() : Value(id),
      name: name == null && nullToAbsent ? const Value.absent() : Value(name),
      image:
          image == null && nullToAbsent ? const Value.absent() : Value(image),
      dose: description == null && nullToAbsent ? const Value.absent() : Value(description),
    );
  }

  TreesTableData copyWith(
          {int id, String name, String image, String dose}) =>
      TreesTableData(
        id: id ?? this.id,
        name: name ?? this.name,
        image: image ?? this.image,
        description: dose ?? this.description,
      );
  @override
  String toString() {
    return (StringBuffer('MedicinesTableData(')
          ..write('id: $id, ')
          ..write('name: $name, ')
          ..write('image: $image, ')
          ..write('dose: $description')
          ..write(')'))
        .toString();
  }

  @override
  int get hashCode => $mrjf($mrjc(
      id.hashCode, $mrjc(name.hashCode, $mrjc(image.hashCode, description.hashCode))));
  @override
  bool operator ==(other) =>
      identical(this, other) ||
      (other is TreesTableData &&
          other.id == this.id &&
          other.name == this.name &&
          other.image == this.image &&
          other.description == this.description);
}

class MedicinesTableCompanion extends UpdateCompanion<TreesTableData> {
  final Value<int> id;
  final Value<String> name;
  final Value<String> image;
  final Value<String> dose;
  const MedicinesTableCompanion({
    this.id = const Value.absent(),
    this.name = const Value.absent(),
    this.image = const Value.absent(),
    this.dose = const Value.absent(),
  });
  MedicinesTableCompanion.insert({
    this.id = const Value.absent(),
    @required String name,
    @required String image,
    @required String dose,
  })  : name = Value(name),
        image = Value(image),
        dose = Value(dose);
  MedicinesTableCompanion copyWith(
      {Value<int> id,
      Value<String> name,
      Value<String> image,
      Value<String> dose}) {
    return MedicinesTableCompanion(
      id: id ?? this.id,
      name: name ?? this.name,
      image: image ?? this.image,
      dose: dose ?? this.dose,
    );
  }
}

class $MedicinesTableTable extends MedicinesTable
    with TableInfo<$MedicinesTableTable, TreesTableData> {
  final GeneratedDatabase _db;
  final String _alias;
  $MedicinesTableTable(this._db, [this._alias]);
  final VerificationMeta _idMeta = const VerificationMeta('id');
  GeneratedIntColumn _id;
  @override
  GeneratedIntColumn get id => _id ??= _constructId();
  GeneratedIntColumn _constructId() {
    return GeneratedIntColumn('id', $tableName, false,
        hasAutoIncrement: true, declaredAsPrimaryKey: true);
  }

  final VerificationMeta _nameMeta = const VerificationMeta('name');
  GeneratedTextColumn _name;
  @override
  GeneratedTextColumn get name => _name ??= _constructName();
  GeneratedTextColumn _constructName() {
    return GeneratedTextColumn('name', $tableName, false,
        minTextLength: 5, maxTextLength: 50);
  }

  final VerificationMeta _imageMeta = const VerificationMeta('image');
  GeneratedTextColumn _image;
  @override
  GeneratedTextColumn get image => _image ??= _constructImage();
  GeneratedTextColumn _constructImage() {
    return GeneratedTextColumn(
      'image',
      $tableName,
      false,
    );
  }

  final VerificationMeta _doseMeta = const VerificationMeta('dose');
  GeneratedTextColumn _dose;
  @override
  GeneratedTextColumn get description => _dose ??= _constructDose();
  GeneratedTextColumn _constructDose() {
    return GeneratedTextColumn(
      'dose',
      $tableName,
      false,
    );
  }

  @override
  List<GeneratedColumn> get $columns => [id, name, image, description];
  @override
  $MedicinesTableTable get asDslTable => this;
  @override
  String get $tableName => _alias ?? 'medicines_table';
  @override
  final String actualTableName = 'medicines_table';
  @override
  VerificationContext validateIntegrity(MedicinesTableCompanion d,
      {bool isInserting = false}) {
    final context = VerificationContext();
    if (d.id.present) {
      context.handle(_idMeta, id.isAcceptableValue(d.id.value, _idMeta));
    } else if (id.isRequired && isInserting) {
      context.missing(_idMeta);
    }
    if (d.name.present) {
      context.handle(
          _nameMeta, name.isAcceptableValue(d.name.value, _nameMeta));
    } else if (name.isRequired && isInserting) {
      context.missing(_nameMeta);
    }
    if (d.image.present) {
      context.handle(
          _imageMeta, image.isAcceptableValue(d.image.value, _imageMeta));
    } else if (image.isRequired && isInserting) {
      context.missing(_imageMeta);
    }
    if (d.dose.present) {
      context.handle(
          _doseMeta, description.isAcceptableValue(d.dose.value, _doseMeta));
    } else if (description.isRequired && isInserting) {
      context.missing(_doseMeta);
    }
    return context;
  }

  @override
  Set<GeneratedColumn> get $primaryKey => {id};
  @override
  TreesTableData map(Map<String, dynamic> data, {String tablePrefix}) {
    final effectivePrefix = tablePrefix != null ? '$tablePrefix.' : null;
    return TreesTableData.fromData(data, _db, prefix: effectivePrefix);
  }

  @override
  Map<String, Variable> entityToSql(MedicinesTableCompanion d) {
    final map = <String, Variable>{};
    if (d.id.present) {
      map['id'] = Variable<int, IntType>(d.id.value);
    }
    if (d.name.present) {
      map['name'] = Variable<String, StringType>(d.name.value);
    }
    if (d.image.present) {
      map['image'] = Variable<String, StringType>(d.image.value);
    }
    if (d.dose.present) {
      map['dose'] = Variable<String, StringType>(d.dose.value);
    }
    return map;
  }

  @override
  $MedicinesTableTable createAlias(String alias) {
    return $MedicinesTableTable(_db, alias);
  }
}

abstract class _$AppDatabase extends GeneratedDatabase {
  _$AppDatabase(QueryExecutor e) : super(SqlTypeSystem.defaultInstance, e);
  $MedicinesTableTable _medicinesTable;
  $MedicinesTableTable get treesTable =>
      _medicinesTable ??= $MedicinesTableTable(this);
  @override
  List<TableInfo> get allTables => [treesTable];
}


///

import 'package:moor_flutter/moor_flutter.dart';
part 'moor_database.g.dart';

class MedicinesTable extends Table {
  // autoincrement sets this to the primary key
  IntColumn get id => integer().autoIncrement()();
  TextColumn get name => text().withLength(min: 5, max: 50)();
  TextColumn get image => text()();
  TextColumn get description => text()();
}


@UseMoor(tables: [MedicinesTable])
class AppDatabase extends _$AppDatabase {
  AppDatabase()
      : super(FlutterQueryExecutor.inDatabaseFolder(
            path: 'db.sqlite', logStatements: true));

  @override
  int get schemaVersion => 1;

  Future<List<TreesTableData>> getAllMedicines() =>
      select(treesTable).get();
  Future insertTree(TreesTableData medicine) =>
      into(treesTable).insert(medicine);
  Future updateTree(TreesTableData medicine) =>
      update(treesTable).replace(medicine);
  Future deleteTree(TreesTableData medicine) =>
      delete(treesTable).delete(medicine);
}

class GardeningTable extends Table {
  // autoincrement sets this to the primary key
  IntColumn get id => integer().autoIncrement()();
  DateTimeColumn get dueDate => dateTime().nullable()();
  TextColumn get description => text()();
}

@UseMoor(tables: [GardeningTable])
class GardeningDatabase extends _$GardeningDatabase {
  GardeningDatabase()
      : super(FlutterQueryExecutor.inDatabaseFolder(
      path: 'db.sqlite', logStatements: true));

  @override
  int get schemaVersion => 1;

  Future<List<GardeningTableData>> getAllGardening() =>
      select(gardeningTable).get();
  Future insertTree(GardeningTableData medicine) =>
      into(gardeningTable).insert(medicine);
  Future updateTree(GardeningTableData medicine) =>
      update(gardeningTable).replace(medicine);
  Future deleteTree(GardeningTableData medicine) =>
      delete(gardeningTable).delete(medicine);
}


build_runner: 1.10.1