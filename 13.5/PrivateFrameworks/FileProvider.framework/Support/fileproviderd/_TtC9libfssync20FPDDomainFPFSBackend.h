//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface _TtC9libfssync20FPDDomainFPFSBackend : NSObject
{
    MISSING_TYPE *domain;
    MISSING_TYPE *providerDomainID;
    MISSING_TYPE *nsDomain;
    MISSING_TYPE *pathsManager;
    MISSING_TYPE *__cachedURL;
    MISSING_TYPE *__fpfs;
    MISSING_TYPE *queue;
    MISSING_TYPE *startupQueue;
    MISSING_TYPE *itemChangedQueue;
    MISSING_TYPE *workingSetChangedQueue;
    MISSING_TYPE *startStatus;
    MISSING_TYPE *didCreateRoot;
    MISSING_TYPE *itemsChangedSource;
    MISSING_TYPE *enumerationAnchorChangedSource;
    MISSING_TYPE *runningEnumerator;
    MISSING_TYPE *rootIsPinnedCache;
    MISSING_TYPE *invalidated;
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)updateRootAfterDomainChangeWithError:(id *)arg1;
@property(nonatomic, readonly) NSArray *rootURLs;
- (id)initWithDomain:(id)arg1;

@end

