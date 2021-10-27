struct song_node ** make_library();

struct song_node ** song_add(struct song_node **library, char *name, char *artist);

struct song_node * search_song(struct song_node **library, char *name, char *artist);

struct song_node * search_artist(struct song_node **song, char *artist);

void print_letter(struct song_node **library, char letter);

void print_artist(struct song_node **library, char *artist);

void print_library(struct song_node **library);

void shuffle(struct song_node **library);

struct song_node ** delete_song(struct song_node **library, char *name, char *artist);

struct song_node ** clear_library(struct song_node **library);
