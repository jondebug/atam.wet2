#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.ev_previewer"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[2764]; const double alignment; void * const ptr;}  ev_previewer_resource_data = { {
  0x47, 0x56, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x74, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x00, 0x00, 0x1c, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x28, 0x09, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 
  0x08, 0x00, 0x00, 0x00, 0x2e, 0xf1, 0xfb, 0xf8, 
  0x08, 0x00, 0x00, 0x00, 0x1c, 0x01, 0x00, 0x00, 
  0x03, 0x00, 0x4c, 0x00, 0x20, 0x01, 0x00, 0x00, 
  0x2c, 0x01, 0x00, 0x00, 0x4b, 0x50, 0x90, 0x0b, 
  0x04, 0x00, 0x00, 0x00, 0x2c, 0x01, 0x00, 0x00, 
  0x04, 0x00, 0x4c, 0x00, 0x30, 0x01, 0x00, 0x00, 
  0x34, 0x01, 0x00, 0x00, 0x93, 0x3c, 0x7d, 0x7e, 
  0x00, 0x00, 0x00, 0x00, 0x34, 0x01, 0x00, 0x00, 
  0x0c, 0x00, 0x76, 0x00, 0x40, 0x01, 0x00, 0x00, 
  0x4f, 0x05, 0x00, 0x00, 0xb0, 0xb7, 0x24, 0x30, 
  0x01, 0x00, 0x00, 0x00, 0x4f, 0x05, 0x00, 0x00, 
  0x06, 0x00, 0x4c, 0x00, 0x58, 0x05, 0x00, 0x00, 
  0x5c, 0x05, 0x00, 0x00, 0xd4, 0xb5, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0x5c, 0x05, 0x00, 0x00, 
  0x01, 0x00, 0x4c, 0x00, 0x60, 0x05, 0x00, 0x00, 
  0x64, 0x05, 0x00, 0x00, 0x1d, 0xe0, 0xec, 0x14, 
  0x00, 0x00, 0x00, 0x00, 0x64, 0x05, 0x00, 0x00, 
  0x13, 0x00, 0x76, 0x00, 0x78, 0x05, 0x00, 0x00, 
  0x87, 0x09, 0x00, 0x00, 0x05, 0xab, 0xfb, 0x74, 
  0x00, 0x00, 0x00, 0x00, 0x87, 0x09, 0x00, 0x00, 
  0x14, 0x00, 0x76, 0x00, 0xa0, 0x09, 0x00, 0x00, 
  0xaf, 0x0a, 0x00, 0x00, 0xf9, 0xf4, 0xb7, 0x15, 
  0x03, 0x00, 0x00, 0x00, 0xaf, 0x0a, 0x00, 0x00, 
  0x07, 0x00, 0x4c, 0x00, 0xb8, 0x0a, 0x00, 0x00, 
  0xbc, 0x0a, 0x00, 0x00, 0x61, 0x61, 0x14, 0x4c, 
  0x07, 0x00, 0x00, 0x00, 0xbc, 0x0a, 0x00, 0x00, 
  0x0a, 0x00, 0x4c, 0x00, 0xc8, 0x0a, 0x00, 0x00, 
  0xcc, 0x0a, 0x00, 0x00, 0x75, 0x69, 0x2f, 0x00, 
  0x06, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
  0x05, 0x00, 0x00, 0x00, 0x6f, 0x72, 0x67, 0x2f, 
  0x03, 0x00, 0x00, 0x00, 0x70, 0x72, 0x65, 0x76, 
  0x69, 0x65, 0x77, 0x65, 0x72, 0x2e, 0x75, 0x69, 
  0xc5, 0x0c, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0xcd, 0x97, 0x4d, 0x6f, 0xdb, 0x30, 
  0x0c, 0x86, 0xef, 0xfd, 0x15, 0x9c, 0x8e, 0x1b, 
  0x94, 0x74, 0xdd, 0x65, 0x18, 0x6c, 0x17, 0x28, 
  0xb0, 0x16, 0xbb, 0x0c, 0xc5, 0xd6, 0x9d, 0x0d, 
  0xd9, 0x66, 0x1c, 0x35, 0xb2, 0xe4, 0x49, 0x54, 
  0xd2, 0xec, 0xd7, 0x4f, 0x76, 0xdc, 0x34, 0x4d, 
  0x8a, 0x38, 0x1f, 0xc3, 0x92, 0xa3, 0x6c, 0x92, 
  0x7a, 0xdf, 0x87, 0x12, 0x9d, 0x44, 0xd7, 0x4f, 
  0x95, 0x82, 0x29, 0x5a, 0x27, 0x8d, 0x8e, 0xd9, 
  0xc7, 0xc1, 0x25, 0x03, 0xd4, 0xb9, 0x29, 0xa4, 
  0x2e, 0x63, 0xf6, 0xeb, 0xe1, 0x96, 0x7f, 0x66, 
  0xd7, 0xc9, 0x45, 0xf4, 0x8e, 0x73, 0xb8, 0x43, 
  0x8d, 0x56, 0x10, 0x16, 0x30, 0x93, 0x34, 0x86, 
  0x52, 0x89, 0x02, 0xe1, 0xd3, 0xe0, 0xea, 0x6a, 
  0x70, 0x09, 0x9c, 0x2f, 0x82, 0xde, 0x73, 0xa8, 
  0x4c, 0x81, 0x5f, 0xa0, 0x29, 0x1b, 0x56, 0xcd, 
  0x63, 0xa9, 0x09, 0xed, 0x48, 0xe4, 0x98, 0x44, 
  0x16, 0x7f, 0x7b, 0x69, 0xd1, 0x81, 0x92, 0x59, 
  0xcc, 0x4a, 0x9a, 0x7c, 0x60, 0x2f, 0x9b, 0x37, 
  0xa5, 0xd8, 0x30, 0x89, 0x4c, 0xf6, 0x88, 0x39, 
  0x41, 0xae, 0x84, 0x73, 0x31, 0xbb, 0xa3, 0xc9, 
  0x8d, 0x27, 0x32, 0x9a, 0x81, 0x2c, 0x62, 0x56, 
  0xdb, 0x50, 0x8e, 0x25, 0x51, 0x6d, 0x4d, 0x8d, 
  0x96, 0xe6, 0xa0, 0x45, 0x85, 0x31, 0x53, 0x22, 
  0x43, 0xc5, 0x80, 0xac, 0xd0, 0x4e, 0x09, 0x12, 
  0x99, 0x0a, 0x0f, 0xe7, 0xe8, 0x58, 0x92, 0xde, 
  0x37, 0x19, 0xd1, 0xf0, 0x39, 0x61, 0x23, 0x35, 
  0x17, 0x3a, 0x1d, 0x99, 0xdc, 0x87, 0xd8, 0x07, 
  0xeb, 0x71, 0x4b, 0xa4, 0xc5, 0x1c, 0xe5, 0x14, 
  0x5d, 0x5a, 0xe0, 0x48, 0x78, 0x45, 0xbd, 0x09, 
  0x64, 0x8c, 0x22, 0x59, 0xa7, 0x84, 0x4f, 0xf4, 
  0xa6, 0xb8, 0x56, 0x1b, 0xd0, 0x58, 0x3a, 0x28, 
  0x82, 0x84, 0x0a, 0xb7, 0x2a, 0x15, 0x39, 0x05, 
  0x50, 0x69, 0xb3, 0x60, 0xc9, 0x4c, 0xea, 0x41, 
  0xdd, 0x63, 0xcd, 0x3b, 0x4c, 0xbd, 0x2e, 0xd0, 
  0x2a, 0xa9, 0x71, 0x53, 0xad, 0xa3, 0xb9, 0x0a, 
  0x4d, 0x69, 0x41, 0x77, 0x19, 0xce, 0x97, 0x25, 
  0xba, 0xd0, 0x63, 0xbe, 0xd8, 0xac, 0xe9, 0xc7, 
  0xb0, 0x8b, 0x1b, 0x2e, 0x1a, 0xd3, 0xd3, 0xa0, 
  0xd2, 0xf0, 0xda, 0xe2, 0x54, 0x1a, 0xef, 0x78, 
  0x2d, 0x4a, 0x64, 0xff, 0x14, 0xf8, 0xad, 0x50, 
  0xee, 0x48, 0xe2, 0x0b, 0x6d, 0x70, 0x1f, 0xb4, 
  0xed, 0xc3, 0x7a, 0xdd, 0xd7, 0x96, 0x5c, 0x59, 
  0xb5, 0xbe, 0x57, 0x33, 0xdc, 0xbc, 0xca, 0x8c, 
  0x92, 0xf9, 0x6a, 0xd6, 0xce, 0x3c, 0x75, 0x30, 
  0x73, 0x8e, 0x2c, 0xbf, 0x87, 0x17, 0x87, 0x70, 
  0x5c, 0xfa, 0xd9, 0x89, 0x61, 0x1b, 0x7d, 0x38, 
  0xbf, 0x3f, 0xc6, 0x54, 0x5c, 0xea, 0x33, 0x43, 
  0xf7, 0x55, 0x2b, 0x61, 0x4b, 0x0c, 0x57, 0x1f, 
  0x0f, 0xba, 0xf9, 0x9d, 0xab, 0x7e, 0x80, 0x5d, 
  0xe0, 0x9b, 0x00, 0xd7, 0x37, 0x51, 0x33, 0x31, 
  0x77, 0xa9, 0x1b, 0x9b, 0x59, 0xda, 0x65, 0xaf, 
  0x83, 0xd9, 0x03, 0xb9, 0xf1, 0x74, 0x66, 0xcc, 
  0x7f, 0x8e, 0xc3, 0xb8, 0x9c, 0x1c, 0x87, 0x3c, 
  0xb8, 0xda, 0x91, 0x79, 0x88, 0x3c, 0xf6, 0xd4, 
  0x2e, 0xad, 0x9f, 0x15, 0xc6, 0x1f, 0xe8, 0x90, 
  0xa0, 0x11, 0x08, 0x42, 0x17, 0x50, 0x89, 0xc9, 
  0xe2, 0x18, 0x37, 0x17, 0x1a, 0x46, 0x92, 0x40, 
  0xea, 0x76, 0x1d, 0x98, 0x15, 0x66, 0xb6, 0x37, 
  0xe1, 0x4e, 0xe8, 0x8e, 0x94, 0xbb, 0xe8, 0x3d, 
  0x49, 0x7f, 0x6b, 0x2b, 0x6c, 0x7c, 0xae, 0x9e, 
  0x8b, 0x6c, 0x02, 0x9f, 0x4a, 0x27, 0x03, 0x81, 
  0x5e, 0xdc, 0x2b, 0x8d, 0xe9, 0xe3, 0x2c, 0xf3, 
  0xa5, 0xf7, 0xa0, 0xc1, 0xd7, 0x47, 0x59, 0x78, 
  0x35, 0x23, 0x4f, 0x20, 0x3f, 0x34, 0x5a, 0x1f, 
  0x6e, 0x60, 0x7d, 0x46, 0xfd, 0x6f, 0x03, 0xdb, 
  0x66, 0xe4, 0xee, 0x06, 0xd6, 0x8f, 0xe2, 0x49, 
  0x5c, 0x84, 0xfb, 0xc7, 0xb3, 0xf0, 0x03, 0xee, 
  0x48, 0x2f, 0xab, 0xc3, 0xeb, 0x24, 0x3e, 0x7a, 
  0xa7, 0xe7, 0xf0, 0xe5, 0x5f, 0xc5, 0xc5, 0x5f, 
  0xb5, 0xd3, 0xb3, 0x03, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x67, 
  0x6e, 0x6f, 0x6d, 0x65, 0x2f, 0x00, 0x00, 0x00, 
  0x07, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 
  0x01, 0x00, 0x00, 0x00, 0x74, 0x68, 0x75, 0x6d, 
  0x62, 0x6e, 0x61, 0x69, 0x6c, 0x2d, 0x66, 0x72, 
  0x61, 0x6d, 0x65, 0x2e, 0x70, 0x6e, 0x67, 0x00, 
  0x40, 0x03, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0xeb, 0x0c, 0xf0, 0x73, 0xe7, 0xe5, 
  0x92, 0xe2, 0x62, 0x60, 0x60, 0xe0, 0xf5, 0xf4, 
  0x70, 0x09, 0x02, 0xd2, 0x2d, 0x40, 0xbc, 0x9a, 
  0x83, 0x0d, 0x48, 0x2e, 0xdf, 0x67, 0xe2, 0x02, 
  0xa4, 0x18, 0x8b, 0x83, 0xdc, 0x9d, 0x18, 0xd6, 
  0x9d, 0x93, 0x79, 0x09, 0xe4, 0xb0, 0x25, 0x79, 
  0xbb, 0xbb, 0x30, 0xfc, 0x07, 0xc1, 0x05, 0x7b, 
  0x97, 0x4f, 0x06, 0x8a, 0x70, 0x16, 0x78, 0x44, 
  0x16, 0x03, 0xb5, 0x5f, 0x07, 0x61, 0x46, 0x27, 
  0x8d, 0xd9, 0x15, 0x40, 0x41, 0xf6, 0x12, 0x4f, 
  0x5f, 0x57, 0xf6, 0xdb, 0xdc, 0x42, 0x62, 0x26, 
  0x22, 0x0d, 0xdb, 0x04, 0x18, 0x19, 0x18, 0x98, 
  0x0e, 0x78, 0xba, 0x38, 0x86, 0x54, 0xdc, 0x7a, 
  0x7b, 0xc3, 0x37, 0x48, 0xda, 0x50, 0xa4, 0xf5, 
  0xa2, 0xf6, 0xee, 0xc6, 0x03, 0x0d, 0x5e, 0xa9, 
  0xff, 0x57, 0x9f, 0x69, 0xb0, 0x7f, 0x1c, 0xc6, 
  0x56, 0xb9, 0xc8, 0xa5, 0x9d, 0xd7, 0x65, 0xce, 
  0x7a, 0xaf, 0xab, 0xdb, 0x1a, 0x3b, 0xef, 0x6f, 
  0xbc, 0xb2, 0xec, 0xeb, 0x3d, 0xe3, 0xac, 0xb5, 
  0x5b, 0x3f, 0x1a, 0xfc, 0xe2, 0xfb, 0xaa, 0xf2, 
  0x52, 0xb8, 0xc9, 0x4c, 0x4e, 0xbc, 0x2d, 0x38, 
  0x51, 0x22, 0xdc, 0xe0, 0x5a, 0xeb, 0x85, 0xc9, 
  0x6f, 0x1e, 0x5b, 0x05, 0x6c, 0xb9, 0xf7, 0xbb, 
  0x27, 0x71, 0xf6, 0x35, 0xc9, 0xae, 0xa5, 0x86, 
  0x31, 0x93, 0xf7, 0xf8, 0x67, 0xbf, 0xdf, 0xfb, 
  0x3d, 0xf7, 0x50, 0x81, 0x5f, 0xd1, 0xec, 0x27, 
  0x76, 0x27, 0xfb, 0x55, 0xca, 0xbf, 0xfe, 0x3a, 
  0x59, 0xbd, 0x23, 0xa4, 0x7a, 0xed, 0x75, 0x15, 
  0x7d, 0xcf, 0x79, 0xc7, 0x2f, 0x5e, 0x8c, 0xba, 
  0xbd, 0xfd, 0xe5, 0xbc, 0x87, 0xcb, 0x0c, 0x6c, 
  0xae, 0x55, 0xad, 0xb8, 0xee, 0x57, 0xd6, 0xb9, 
  0xb4, 0xac, 0xdd, 0xf6, 0xa4, 0xea, 0xc9, 0xe0, 
  0x49, 0xf7, 0xd9, 0x55, 0x6e, 0x2e, 0xab, 0x6e, 
  0x5b, 0x5b, 0xd6, 0x76, 0x5c, 0x65, 0xff, 0xab, 
  0x2a, 0x73, 0x59, 0xd9, 0x28, 0xe6, 0x23, 0x5b, 
  0xcb, 0xda, 0x1b, 0x1f, 0xae, 0x9d, 0x17, 0x3f, 
  0xa9, 0xe6, 0x96, 0xe2, 0xb1, 0x89, 0x1f, 0x03, 
  0x24, 0xea, 0xc4, 0x26, 0x9c, 0xdd, 0xb8, 0xf1, 
  0x4a, 0xe1, 0xc7, 0x38, 0x77, 0xd7, 0x57, 0x55, 
  0xd6, 0xf5, 0x2f, 0xd2, 0x05, 0x98, 0x8f, 0xfa, 
  0xbe, 0xe5, 0xf9, 0xbe, 0xf5, 0x9c, 0x83, 0x0e, 
  0xeb, 0xa3, 0xa8, 0xcd, 0x75, 0xeb, 0x22, 0xeb, 
  0x7f, 0x7d, 0xda, 0xe0, 0xbb, 0xff, 0xce, 0xb2, 
  0xc7, 0x8f, 0x6d, 0x6a, 0x2f, 0x6f, 0x70, 0x5e, 
  0xc3, 0xaa, 0x74, 0x39, 0xe7, 0xff, 0xcf, 0xef, 
  0x87, 0xca, 0x7e, 0x34, 0x97, 0x45, 0xa8, 0xdf, 
  0x37, 0x99, 0xf6, 0xfa, 0xcb, 0xd1, 0x39, 0xf6, 
  0x7f, 0x03, 0x98, 0x9c, 0x1c, 0x38, 0x38, 0x18, 
  0x15, 0x15, 0x58, 0x5a, 0x1a, 0x04, 0x04, 0xb0, 
  0x71, 0xf0, 0xc9, 0x01, 0x39, 0xf8, 0xe4, 0xc0, 
  0x1c, 0x4a, 0x2d, 0x68, 0x98, 0x40, 0xc0, 0x02, 
  0x07, 0x0f, 0x02, 0x16, 0x28, 0xa8, 0x60, 0x91, 
  0xfb, 0x65, 0x7f, 0x8b, 0xef, 0xfc, 0xef, 0xc4, 
  0xb7, 0x5b, 0xb7, 0xb8, 0x25, 0xcf, 0x3b, 0x6e, 
  0x59, 0xcf, 0x99, 0xe4, 0x56, 0xe0, 0xfb, 0x29, 
  0x2e, 0xdc, 0xfa, 0x64, 0x94, 0xc2, 0xb3, 0x9b, 
  0xef, 0xdc, 0x45, 0x6e, 0x33, 0x1e, 0x36, 0x05, 
  0xc6, 0x49, 0xf6, 0xa4, 0xe7, 0x55, 0xb9, 0xcc, 
  0x49, 0x9a, 0x02, 0xef, 0x3d, 0xe3, 0xb2, 0x8e, 
  0x4d, 0x9f, 0xf5, 0x93, 0xbd, 0x4b, 0xf2, 0x88, 
  0xe9, 0xc9, 0xe8, 0x49, 0xcb, 0x55, 0xf6, 0xbf, 
  0xfe, 0xba, 0x5b, 0xe5, 0xb9, 0xca, 0xd9, 0xea, 
  0x9d, 0x2e, 0xc9, 0xe7, 0xd6, 0x9b, 0x3e, 0x5e, 
  0x3e, 0xeb, 0x67, 0x29, 0xdb, 0x45, 0xfe, 0x22, 
  0xb6, 0xb6, 0xe9, 0x2a, 0xe6, 0x5b, 0xad, 0x19, 
  0x36, 0xf2, 0x75, 0xec, 0x2d, 0x6b, 0xfb, 0x78, 
  0xb0, 0x7e, 0xe5, 0xcd, 0xf7, 0x9e, 0xbf, 0xf6, 
  0x38, 0xc7, 0xbc, 0x9a, 0xe1, 0xb1, 0x72, 0xa7, 
  0x36, 0x4f, 0x5f, 0xb7, 0x69, 0xbe, 0x4e, 0x3c, 
  0xf7, 0xe1, 0xe2, 0xb3, 0xfb, 0xd4, 0x3d, 0x5f, 
  0xef, 0x5d, 0xbe, 0xf5, 0x5a, 0xd6, 0x87, 0xdb, 
  0x5b, 0x8e, 0x05, 0x26, 0x96, 0x47, 0xe4, 0x4f, 
  0x7f, 0x71, 0xf9, 0xec, 0xd3, 0x88, 0xea, 0xf7, 
  0x7b, 0xb7, 0xdf, 0xfb, 0x7f, 0x2f, 0xc1, 0x4f, 
  0xe3, 0x99, 0x36, 0x4f, 0xf6, 0x62, 0x89, 0xfb, 
  0x46, 0xdf, 0xe2, 0x04, 0xec, 0x1c, 0x7c, 0x34, 
  0x98, 0x0e, 0x6d, 0x6f, 0x9a, 0x68, 0xa7, 0xf8, 
  0x83, 0xd9, 0xd2, 0x7c, 0x13, 0x9b, 0x5e, 0xab, 
  0x0a, 0x28, 0x79, 0x33, 0x78, 0xba, 0xfa, 0xb9, 
  0xac, 0x73, 0x4a, 0x68, 0x02, 0x00, 0x3d, 0xae, 
  0x38, 0x68, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x65, 
  0x76, 0x69, 0x6e, 0x63, 0x65, 0x2d, 0x70, 0x72, 
  0x65, 0x76, 0x69, 0x65, 0x77, 0x65, 0x72, 0x2e, 
  0x63, 0x73, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xa2, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0x95, 0x90, 0xcf, 0x4e, 0xc3, 0x30, 
  0x0c, 0xc6, 0xef, 0x7d, 0x8a, 0x68, 0x27, 0x38, 
  0xb4, 0x41, 0xda, 0xb4, 0x43, 0x76, 0xe1, 0xb2, 
  0x57, 0xe0, 0x3a, 0xa5, 0xc9, 0x47, 0x1a, 0x91, 
  0xc4, 0x91, 0x9b, 0xb4, 0x43, 0x88, 0x77, 0xa7, 
  0x1d, 0x4c, 0x02, 0x31, 0x09, 0x61, 0xcb, 0x07, 
  0xff, 0xf9, 0x7e, 0xb2, 0xdd, 0x19, 0x4a, 0x05, 
  0xa9, 0xb4, 0x93, 0xc7, 0xdc, 0x59, 0x32, 0x35, 
  0xae, 0x59, 0xd6, 0x0e, 0xe2, 0xad, 0x11, 0x8b, 
  0xf5, 0xc4, 0x16, 0xdc, 0x8e, 0xe5, 0x35, 0x40, 
  0x89, 0x91, 0x82, 0xb7, 0x87, 0xef, 0x8d, 0xd9, 
  0xdb, 0x32, 0x28, 0xb1, 0xcd, 0xe7, 0x4b, 0xec, 
  0x97, 0xd8, 0xe5, 0xf3, 0x8f, 0x11, 0x1f, 0x17, 
  0x9c, 0x12, 0x95, 0xc3, 0xdd, 0x86, 0x31, 0x52, 
  0x65, 0x03, 0x25, 0xa5, 0x24, 0x76, 0xd2, 0x25, 
  0x8a, 0x90, 0x98, 0x7c, 0x32, 0x90, 0x99, 0xb1, 
  0xee, 0x01, 0x96, 0xd5, 0xcb, 0x32, 0xd4, 0xd8, 
  0x27, 0xed, 0x43, 0xfb, 0xcc, 0x3a, 0xa2, 0xcb, 
  0xc9, 0x6d, 0xee, 0xc5, 0x76, 0xf1, 0xbd, 0xd8, 
  0x7d, 0xf1, 0xb5, 0x79, 0x71, 0x4c, 0x35, 0xd9, 
  0xd6, 0x50, 0x20, 0x56, 0xe2, 0xb1, 0x0c, 0x88, 
  0x38, 0xf5, 0xee, 0x74, 0x29, 0x1c, 0x9a, 0xf7, 
  0xa6, 0x39, 0x4e, 0x4f, 0x0b, 0xf4, 0x7a, 0xce, 
  0x3f, 0x24, 0x6a, 0x44, 0x80, 0x29, 0xb0, 0x7f, 
  0x69, 0xaf, 0x73, 0xb7, 0x20, 0xb7, 0x9f, 0xfa, 
  0x8b, 0x34, 0x0f, 0xbe, 0xe0, 0xf3, 0xaa, 0xac, 
  0xad, 0xf5, 0xc9, 0x29, 0xf1, 0xb0, 0x62, 0x3e, 
  0x00, 0x20, 0xe5, 0x8c, 0x06, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x65, 
  0x76, 0x69, 0x6e, 0x63, 0x65, 0x2f, 0x00, 0x00, 
  0x08, 0x00, 0x00, 0x00, 0x70, 0x72, 0x65, 0x76, 
  0x69, 0x65, 0x77, 0x65, 0x72, 0x2f, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00
} };

static GStaticResource static_resource = { ev_previewer_resource_data.data, sizeof (ev_previewer_resource_data.data), NULL, NULL, NULL };
extern GResource *ev_previewer_get_resource (void);
GResource *ev_previewer_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a sane way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for Win32 (x86) and x64 programs, as symbols on Win32 are prefixed
 * with an underscore but symbols on x64 are not.
 */
#ifdef _WIN64
#define G_MSVC_SYMBOL_PREFIX ""
#else
#define G_MSVC_SYMBOL_PREFIX "_"
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
