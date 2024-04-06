#include <QApplication>
#include <QMainWindow>
#include <QLabel>

class MainWindow : public QMainWindow {
public:
    MainWindow() {
        // Create a label and set its text to "Hello World"
        QLabel* label = new QLabel("Hello World", this);
        label->setAlignment(Qt::AlignCenter); // Center the text

        // Set the central widget of the MainWindow to be the label
        setCentralWidget(label);
    }
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow window;
    window.resize(400, 300); // Set the window size
    window.setWindowTitle("Qt Hello World"); // Set window title
    window.show();

    return app.exec();
}
