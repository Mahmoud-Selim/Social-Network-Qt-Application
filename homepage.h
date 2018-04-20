#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QMainWindow>
#include "profilepage.h"
#include "posts.h"
namespace Ui {
class HomePage;
}

class HomePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = 0);
    friend class ProfilePage;

    ~HomePage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::HomePage *ui;


private slots:
    void viewPosts();
    std::vector<Post>* makePosts();
    void on_LikeButton_clicked();
    void viewMorePosts(int i);
    void on_CommentButton_clicked();
private:
    unsigned int shownPostsNumber;
    std::vector<Post> *pagePosts;
};

#endif // HOMEPAGE_H
