//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PDFTileSurface : NSObject
{
    int tileId;
    int pageNumber;
    int tileSize;
    int type;
    struct __IOSurface *ioSurfaceRef;
    struct CGImage *cgImageRef;
}

- (void)releaseSurface;

@end

