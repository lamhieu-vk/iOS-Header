//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol NSStreamDelegate;

@interface NSStream : NSObject
{
}


// Remaining properties
@property id <NSStreamDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSError *streamError; // @dynamic streamError;
@property(readonly) unsigned long long streamStatus; // @dynamic streamStatus;
@end

