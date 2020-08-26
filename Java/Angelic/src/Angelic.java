public class Angelic {

    private int height;

    Angelic() {
    }

    Angelic(int h) {
        height = h;
    }

    public void currentHeight(int n) {

        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0)
                height += 2;
            else
                height *= 3;
        }

    }

    public int getHeight() {

        return height;
    }

}