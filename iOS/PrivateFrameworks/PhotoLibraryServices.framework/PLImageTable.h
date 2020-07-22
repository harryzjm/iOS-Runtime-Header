//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLThumbPersistenceManager-Protocol.h>

@class NSMutableArray, NSString;

@interface PLImageTable : NSObject <PLThumbPersistenceManager>
{
    NSString *_path;
    int _sideLength;
    _Bool _squareCropped;
    int _imageRowBytes;
    int _imageLength;
    int _entryLength;
    _Bool _readOnly;
    _Bool _dying;
    int _fid;
    long long _fileLength;
    long long _entryCount;
    unsigned long long _segmentLength;
    long long _segmentCount;
    NSMutableArray *_allSegments;
}

+ (void)releaseSegmentCache;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (struct CGImage *)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void *)arg3;
- (_Bool)validateData:(id)arg1 withToken:(id)arg2;
- (id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 dataOffset:(int *)arg8;
- (id)_debugDescription;
- (void)finishEntryAtIndex:(unsigned long long)arg1 withImageData:(id)arg2 sourceImageSize:(struct CGSize)arg3 assetUUID:(id)arg4;
- (void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5;
- (struct CGSize)imageSize;
- (void)_verifyThumbnailDataForIndex:(unsigned long long)arg1 uuid:(id)arg2;
- (void)compactWithOccupiedIndexes:(id)arg1;
- (id)preflightCompactionWithOccupiedIndexes:(id)arg1;
- (_Bool)_compactWithOccupiedIndexes:(id)arg1 outPhotoUUIDToIndexMap:(id *)arg2;
- (void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1;
- (void)deleteEntryWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (void)_flushEntryAtAddress:(void *)arg1;
- (void)_flushEntryAtAddress:(void *)arg1 count:(int)arg2;
- (void)_addEntriesIfNecessaryForIndex:(long long)arg1;
- (void)_setEntryCount:(long long)arg1;
- (long long)entryCount;
- (void)touchEntriesInRange:(struct _NSRange)arg1;
- (id)dataForEntryAtIndex:(unsigned long long)arg1 createIfNeeded:(_Bool)arg2;
- (void)_updateSegmentCount;
- (void)_reloadSegmentAtIndex:(long long)arg1;
- (void)_releaseSegment:(id)arg1;
- (void)_releaseSegmentAtIndex:(long long)arg1;
- (id)_segmentAtIndex:(long long)arg1;
- (_Bool)usesThumbIdentifiers;
@property(readonly, nonatomic) _Bool isReadOnly;
- (unsigned long long)_segmentLength;
- (int)_fileDescriptor;
- (void)dealloc;
- (id)initWithPath:(id)arg1 readOnly:(_Bool)arg2 sideLengthInPixels:(int)arg3 squareCropped:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

