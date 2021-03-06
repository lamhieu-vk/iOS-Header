//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MusicLibrary/NSCopying-Protocol.h>
#import <MusicLibrary/NSMutableCopying-Protocol.h>
#import <MusicLibrary/NSSecureCoding-Protocol.h>

@class NSData, NSFileHandle, NSString;

@interface ML3DatabaseImport : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_libraryPath;
    NSData *_trackData;
    NSData *_playlistData;
    NSFileHandle *_fileHandle;
    NSString *_syncAnchor;
    _Bool _resetSync;
    _Bool _sagaEnabled;
    long long _storeAccountID;
    long long _preferredVideoQuality;
    unsigned int _homeSharingBasePlaylistID;
    _Bool _tracksAreLibraryOwnedContent;
    _Bool _playlistsAreLibraryOwnedContent;
    _Bool _pendingMatch;
    _Bool _isServerImport;
    NSString *_syncLibraryID;
    _Bool _suspendable;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isSuspendable) _Bool suspendable; // @synthesize suspendable=_suspendable;
@property(readonly, nonatomic) NSString *syncLibraryID; // @synthesize syncLibraryID=_syncLibraryID;
@property(readonly, nonatomic) _Bool isServerImport; // @synthesize isServerImport=_isServerImport;
@property(readonly, nonatomic, getter=isPendingMatch) _Bool pendingMatch; // @synthesize pendingMatch=_pendingMatch;
@property(readonly, nonatomic) _Bool playlistsAreLibraryOwnedContent; // @synthesize playlistsAreLibraryOwnedContent=_playlistsAreLibraryOwnedContent;
@property(readonly, nonatomic) _Bool tracksAreLibraryOwnedContent; // @synthesize tracksAreLibraryOwnedContent=_tracksAreLibraryOwnedContent;
@property(readonly, nonatomic) unsigned int homeSharingBasePlaylistID; // @synthesize homeSharingBasePlaylistID=_homeSharingBasePlaylistID;
@property(readonly, nonatomic) long long preferredVideoQuality; // @synthesize preferredVideoQuality=_preferredVideoQuality;
@property(readonly, nonatomic) long long storeAccountID; // @synthesize storeAccountID=_storeAccountID;
@property(readonly, nonatomic, getter=isSagaEnabled) _Bool sagaEnabled; // @synthesize sagaEnabled=_sagaEnabled;
@property(readonly, nonatomic, getter=isResetSync) _Bool resetSync; // @synthesize resetSync=_resetSync;
@property(readonly, nonatomic) NSString *syncAnchor; // @synthesize syncAnchor=_syncAnchor;
@property(readonly, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(readonly, nonatomic) NSData *playlistData; // @synthesize playlistData=_playlistData;
@property(readonly, nonatomic) NSData *trackData; // @synthesize trackData=_trackData;
@property(readonly, nonatomic) NSString *libraryPath; // @synthesize libraryPath=_libraryPath;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithLibraryPath:(id)arg1 trackData:(id)arg2 playlistData:(id)arg3;

@end

