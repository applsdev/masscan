#ifndef PROTO_DNS_H
#define PROTO_DNS_H
struct PreprocessedInfo;
struct Output;

unsigned handle_dns(struct Output *out, const unsigned char *px, unsigned length, struct PreprocessedInfo *parsed);

#endif
