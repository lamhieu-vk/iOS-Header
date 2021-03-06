//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/VNPersonsModelFaceModelDataProvider-Protocol.h>

@class NSString, VNPersonsModel;
@protocol VNPersonsModelDataSource;

__attribute__((visibility("hidden")))
@interface _VNPersonsModelDataSourceBasedDataProvider : NSObject <VNPersonsModelFaceModelDataProvider>
{
    VNPersonsModel *_personsModel;
    id <VNPersonsModelDataSource> _dataSource;
}

- (void).cxx_destruct;
- (id)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2;
- (unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg1;
- (id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1;
- (unsigned long long)faceModelPersonsCount;
- (id)initWithPersonsModel:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

