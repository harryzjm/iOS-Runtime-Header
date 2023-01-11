//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSWPImageBulletProvider : NSObject
{
    NSMutableArray *_images;
    NSMutableArray *_filenames;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)p_predefinedImageNames;
- (id)p_pathToPredefinedImages;
- (id)dataForImageBullet:(id)arg1 withContext:(id)arg2;
@property(readonly, nonatomic) NSArray *predefinedImages;

@end

