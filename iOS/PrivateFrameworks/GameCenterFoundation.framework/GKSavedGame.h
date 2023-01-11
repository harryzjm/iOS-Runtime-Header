//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSCopying-Protocol.h>

@class NSDate, NSString, NSURL;

@interface GKSavedGame : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_deviceName;
    NSDate *_modificationDate;
    NSURL *_fileURL;
}

@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

