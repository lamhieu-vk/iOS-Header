//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideo, SVVideoPlaybackSeeking;

@protocol SVVideoPlaybackSeekerFactory <NSObject>
- (id <SVVideoPlaybackSeeking>)createPlaybackSeekerForVideo:(id <SVVideo>)arg1;
@end

