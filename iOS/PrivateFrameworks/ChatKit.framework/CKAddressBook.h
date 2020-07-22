//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CKAddressBook : NSObject
{
}

+ (id)monogrammerWithDiameter:(double)arg1 style:(long long)arg2 useAppTintColor:(_Bool)arg3 customFont:(id)arg4;
+ (void)flushMonogrammers;
+ (id)monogrammerProvider;
+ (id)locationSharingContactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 useCustomFont:(_Bool)arg3;
+ (id)transcriptContactImageOfDiameter:(double)arg1 forRecordID:(int)arg2;
+ (id)placeholderContactImageOfDiameter:(double)arg1 monogramStyle:(long long)arg2 tintMonogramText:(_Bool)arg3;
+ (id)contactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 monogramStyle:(long long)arg3 tintMonogramText:(_Bool)arg4 customFont:(id)arg5;
+ (id)contactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 monogramStyle:(long long)arg3 tintMonogramText:(_Bool)arg4;
+ (void *)addressBook;
+ (id)contactImageCache;

@end

