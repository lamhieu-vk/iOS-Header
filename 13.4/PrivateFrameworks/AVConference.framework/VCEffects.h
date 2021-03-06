//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VCVideoFrameBufferPool;

__attribute__((visibility("hidden")))
@interface VCEffects : NSObject
{
    int _effectsMode;
    VCVideoFrameBufferPool *_bufferPool;
    _Bool _effectsApplied;
    _Bool _faceMeshTrackingEnabled;
}

@property(nonatomic) _Bool faceMeshTrackingEnabled; // @synthesize faceMeshTrackingEnabled=_faceMeshTrackingEnabled;
@property(nonatomic) _Bool effectsApplied; // @synthesize effectsApplied=_effectsApplied;
@property(nonatomic) int effectsMode; // @synthesize effectsMode=_effectsMode;
- (_Bool)releaseFrameWithTime:(long long)arg1;
- (_Bool)addFrame:(struct __CVBuffer *)arg1 time:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

