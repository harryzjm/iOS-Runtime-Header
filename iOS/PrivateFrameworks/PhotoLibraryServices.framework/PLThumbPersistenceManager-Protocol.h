//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, PLImageContainer, PLManagedAsset;

@protocol PLThumbPersistenceManager <NSObject>
@property(readonly, nonatomic) _Bool isReadOnly;
@property(readonly, nonatomic) NSString *path;
- (NSString *)_debugDescription;
- (_Bool)usesThumbIdentifiers;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(PLManagedAsset *)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(PLManagedAsset *)arg1;
- (struct CGImage *)createImageWithIdentifier:(NSString *)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void *)arg3;
- (_Bool)validateData:(NSData *)arg1 withToken:(NSString *)arg2;
- (NSData *)imageDataWithIdentifier:(NSString *)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;
- (void)setImageForEntry:(PLImageContainer *)arg1 withIdentifier:(NSString *)arg2 orIndex:(unsigned long long)arg3 photoUUID:(NSString *)arg4 options:(NSDictionary *)arg5;

@optional
- (NSString *)thumbnailPathForThumbIdentifier:(NSString *)arg1;
- (void)deleteEntryWithIdentifier:(NSString *)arg1 orIndex:(unsigned long long)arg2 uuid:(NSString *)arg3;
@end
