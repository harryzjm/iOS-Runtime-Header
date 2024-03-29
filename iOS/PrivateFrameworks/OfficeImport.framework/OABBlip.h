//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OABBlip : NSObject
{
}

+ (void)writeBlip:(id)arg1 toBlipStoreEntry:(struct EshBSE *)arg2;
+ (struct EshBlip *)writeBlip:(id)arg1;
+ (id)readBlipFromEshBlip:(struct EshBlip *)arg1;
+ (id)readBlipFromBse:(id)arg1;
+ (void)writeEmptyBlipStoreEntry:(struct EshBSE *)arg1;
+ (id)compressMetafileData:(id)arg1 info:(void *)arg2;
+ (void)setMetafileBoundsFromPictData:(id)arg1 info:(void *)arg2;
+ (int)blipTypeForBlipSignature:(int)arg1;
+ (id)delayedSubBlipWithMetafileInfo:(const void *)arg1;
+ (id)subBlipWithMetafileInfo:(const void *)arg1;
+ (id)dibFileContentsWithDibBlipData:(const struct OcBinaryData *)arg1;

@end

