//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol GEOTransitRouteUpdaterDelegate;

@interface GEOTransitRouteUpdater : NSObject
{
    id <GEOTransitRouteUpdaterDelegate> _delegate;
    _Bool _active;
    NSSet *_requests;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) NSSet *requests; // @synthesize requests=_requests;
@property(nonatomic) __weak id <GEOTransitRouteUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 andInitialTTL:(double)arg2;

@end

