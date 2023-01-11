//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUILibraryMetrics : NSObject
{
}

+ (id)pageStringForLibraryCategoryType:(long long)arg1;
+ (id)pageStringForLibraryShelfType:(long long)arg1;
+ (id)pageStringForLibraryCellType:(long long)arg1;
+ (id)getMediaEntityContentType:(id)arg1;
+ (id)getMediaItemContentType:(id)arg1;
+ (id)pageStringForEntityType:(id)arg1;
+ (void)recordPageEventWithPageId:(id)arg1 andPageType:(id)arg2;
+ (void)recordPageEventWithPageType:(id)arg1;
+ (void)recordClickOnMediaEntity:(id)arg1;
+ (void)recordPlayOfMediaItem:(id)arg1;
+ (void)recordPlayOfMediaEntity:(id)arg1 isLaunchingExtras:(_Bool)arg2;

@end
