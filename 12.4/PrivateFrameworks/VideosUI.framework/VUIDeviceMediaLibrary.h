//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIMediaLibrary.h>

@interface VUIDeviceMediaLibrary : VUIMediaLibrary
{
}

- (void)updateFromCloudWithReason:(long long)arg1;
- (void)updateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isInitialUpdateInProgress) _Bool initialUpdateInProgress;
@property(readonly, nonatomic, getter=isUpdating) _Bool updating;

@end

