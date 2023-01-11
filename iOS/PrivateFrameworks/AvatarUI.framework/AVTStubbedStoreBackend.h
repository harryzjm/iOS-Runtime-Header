//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTStoreBackend-Protocol.h>

@class NSString;

@interface AVTStubbedStoreBackend : NSObject <AVTStoreBackend>
{
}

- (_Bool)canCreateAvatarWithError:(id *)arg1;
- (id)duplicateAvatarRecord:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAvatarWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)saveAvatar:(id)arg1 error:(id *)arg2;
- (id)avatarsForFetchRequest:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
