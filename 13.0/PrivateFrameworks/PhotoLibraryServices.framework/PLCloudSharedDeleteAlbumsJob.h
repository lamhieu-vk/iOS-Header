//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob
{
    NSArray *_albumCloudGUIDsToDelete;
}

+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg1;
@property(retain, nonatomic) NSArray *albumCloudGUIDsToDelete; // @synthesize albumCloudGUIDsToDelete=_albumCloudGUIDsToDelete;
- (void).cxx_destruct;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;
- (id)description;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end

