//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLCaptureScope.h>

#import <MTLCapture/CaptureMTLObject-Protocol.h>

@interface CaptureMTLCaptureScope : MTLCaptureScope <CaptureMTLObject>
{
    struct GTTraceContext *_traceContext;
    struct GTTraceStream *_traceStream;
    _Bool _stopCapture;
}

- (void)dealloc;
- (void)setLabel:(id)arg1;
- (void)endScope;
- (void)beginScope;
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2 captureContext:(struct GTTraceContext *)arg3;

// Remaining properties
@property(readonly) id baseObject;

@end

