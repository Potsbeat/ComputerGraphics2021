typedef struct Vertex {
    double x, y, z;
    struct Vertex* prev;
    struct Vertex* next;
} Vertex;

typedef struct VertexList {
    struct Vertex* first;
    struct Vertex* last;
} VertexList;

void printVertList(VertexList *lista){
    Vertex *temp = lista->first;

    while(temp->next != NULL){
        printf("%lf, %lf, %lf\n", (temp->x), (temp->y), (temp->z));
        temp = temp->next;
    }
}

void addVertex(VertexList *lista, double x, double y, double z){
    Vertex* new_vertex = malloc(sizeof(Vertex));
    new_vertex->x = x;
    new_vertex->y = y;
    new_vertex->z = z;


}

struct VertexList* newVertexList(){
    VertexList* lista = NULL;
    lista = malloc(sizeof(VertexList));
    lista->first = NULL;
    lista->last = NULL;

    return lista;
}


