//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IBCocoaTouchToolFoundation/IBBinaryArchiving-Protocol.h>
#import <IBCocoaTouchToolFoundation/NSObject-Protocol.h>

@class IBBinaryArchiver, NSString;

@protocol IBBinaryArchivableColor <NSObject, IBBinaryArchiving>
+ (id)blackColor;
+ (id)ibSimpleColorPairWithAnyOrLightColor:(id)arg1 darkColor:(id)arg2;
+ (id)ibColorWithName:(NSString *)arg1 bundleID:(NSString *)arg2 fallbackColor:(id)arg3 unarchiveAsColorWrapper:(_Bool)arg4;
+ (id)ibColorWithDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)ibColorWithSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)ibColorWithGenericGamma22White:(double)arg1 alpha:(double)arg2;
- (NSString *)ibArchivedSystemKeyPathForBinaryArchiver:(IBBinaryArchiver *)arg1 fallbackColor:(id *)arg2;
- (void)set;
- (_Bool)ibGetColorName:(id *)arg1 bundleID:(id *)arg2 fallbackColor:(id *)arg3 unarchiveAsColorWrapper:(_Bool *)arg4;
- (_Bool)ibGetDisplayP3Red:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (_Bool)ibGetSRGBRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (_Bool)ibGetGenericGamma22White:(double *)arg1 alpha:(double *)arg2;
@end

