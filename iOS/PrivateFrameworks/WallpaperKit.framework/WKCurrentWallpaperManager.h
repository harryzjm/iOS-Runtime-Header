//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSNotificationCenter, NSURL, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface WKCurrentWallpaperManager : NSObject
{
    NSObject<OS_dispatch_queue> *__wallpaperChangeQueue;
    NSFileManager *__fileManager;
    NSNotificationCenter *__notificationCenter;
    NSUserDefaults *__userDefaults;
    NSURL *_wallpaperCollectionsDirectoryURL;
}

+ (id)sharedCurrentWallpaperManager;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *wallpaperCollectionsDirectoryURL; // @synthesize wallpaperCollectionsDirectoryURL=_wallpaperCollectionsDirectoryURL;
@property(retain, nonatomic) NSUserDefaults *_userDefaults; // @synthesize _userDefaults=__userDefaults;
@property(retain, nonatomic) NSNotificationCenter *_notificationCenter; // @synthesize _notificationCenter=__notificationCenter;
@property(retain, nonatomic) NSFileManager *_fileManager; // @synthesize _fileManager=__fileManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_wallpaperChangeQueue; // @synthesize _wallpaperChangeQueue=__wallpaperChangeQueue;
- (void)setWallpaperRepresenting:(id)arg1 forWallpaperLocation:(id)arg2 desiredCropRect:(struct CGRect)arg3 wallpaperOptions:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setWallpaperRepresenting:(id)arg1 forWallpaperLocation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithFileManager:(id)arg1 notificationCenter:(id)arg2 userDefaults:(id)arg3 wallpaperPhotoLibrary:(id)arg4;

@end
