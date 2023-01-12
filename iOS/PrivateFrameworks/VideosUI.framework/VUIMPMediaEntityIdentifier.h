//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUIMPMediaEntityIdentifier : NSObject
{
    NSNumber *_persistentID;
    VUIMediaEntityType *_mediaEntityType;
}

+ (id)mediaItemIdentifierWithMediaItem:(id)arg1;
+ (id)showIdentifierWithMediaItem:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) VUIMediaEntityType *mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property(copy, nonatomic) NSNumber *persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPersistentID:(id)arg1 mediaEntityType:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

