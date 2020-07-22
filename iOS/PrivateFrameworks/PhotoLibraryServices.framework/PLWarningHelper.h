//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PLWarningHelper : NSObject
{
    NSArray *__assets;
    NSArray *__additionalPhotoStreamAssets;
    NSString *__clientName;
    long long __style;
}

+ (id)allWarningMessageCombinations;
+ (void)getDeletionWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 forAlbums:(id)arg4 folders:(id)arg5 clientName:(id)arg6 style:(long long)arg7;
+ (id)_usedElsewhereWarningTextForAssetCount:(long long)arg1 inPhotoStreamCount:(long long)arg2 iniPhotoCount:(long long)arg3 inSomeAlbumCount:(long long)arg4 affectedLocalAlbumsCount:(long long)arg5 itemKindSuffix:(id)arg6 actualDeletionCount:(long long)arg7;
+ (void)getAvalancheDeleteWarning:(id *)arg1 actualDeletionCount:(long long *)arg2 forAssets:(id)arg3;
+ (void)getExpungeWarningMessage:(id *)arg1 buttonTitle:(id *)arg2 forAssets:(id)arg3;
+ (void)getDeletionWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 forAssets:(id)arg4 additionalPhotoStreamAssets:(id)arg5 clientName:(id)arg6 style:(long long)arg7;
+ (void)_getWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 forItemSuffix:(id)arg4 count:(unsigned long long)arg5 operation:(long long)arg6 clientName:(id)arg7;
+ (void)getWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 forAssets:(id)arg4 operation:(long long)arg5 clientName:(id)arg6;
@property(nonatomic, setter=_setStyle:) long long _style; // @synthesize _style=__style;
@property(retain, nonatomic, setter=_setClientName:) NSString *_clientName; // @synthesize _clientName=__clientName;
@property(retain, nonatomic, setter=_setAdditionalPhotoStreamAssets:) NSArray *_additionalPhotoStreamAssets; // @synthesize _additionalPhotoStreamAssets=__additionalPhotoStreamAssets;
@property(retain, nonatomic, setter=_setAssets:) NSArray *_assets; // @synthesize _assets=__assets;
- (id)_usedElsewhereWarningTextForAssets:(id)arg1 additionalPhotoStreamAssets:(id)arg2 actualDeletionCount:(long long)arg3;
- (id)_cloudSharedWarningTextForAssets:(id)arg1;
- (void)_getDeletionWarningTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3;
- (void)dealloc;

@end

