//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NPKGizmoDatabaseManifestEntry : NSObject
{
    NSString *_uniqueID;
    NSArray *_localManifestHashes;
    NSArray *_remoteManifestHashes;
}

@property(retain, nonatomic) NSArray *remoteManifestHashes; // @synthesize remoteManifestHashes=_remoteManifestHashes;
@property(retain, nonatomic) NSArray *localManifestHashes; // @synthesize localManifestHashes=_localManifestHashes;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (id)description;

@end

