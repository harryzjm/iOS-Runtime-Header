//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AvatarPersistence/AVTAvatarStore-Protocol.h>
#import <AvatarPersistence/AVTStickerBackend-Protocol.h>

@protocol AVTAvatarStoreInternal <AVTAvatarStore, AVTStickerBackend>
+ (unsigned long long)maximumNumberOfFetchableAvatars;
+ (unsigned long long)maximumNumberOfSavableAvatars;
@end
