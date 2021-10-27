struct song_node {
    char name[100];
    char artist[100];
    struct song_node *next;
};

struct song_node * song_make(char *name, char *artist);

struct song_node * insert_front(struct song_node *song, char *name, char *artist);

int song_compare(struct song_node *s1, struct song_node *s2);

struct song_node * song_insert(struct song_node *song, char *name, char *artist);

void print_song(struct song_node *song);

void print_list(struct song_node *song);

struct song_node * song_find(struct song_node *song, char *name, char *artist);

struct song_node * find_artist_list(struct song_node *song, char *artist);

struct song_node * song_random(struct song_node *song);

struct song_node * song_remove(struct song_node *song, char *name, char *artist);

struct song_node * list_free(struct song_node *song);
