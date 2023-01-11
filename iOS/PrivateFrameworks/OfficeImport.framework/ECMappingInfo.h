//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ECMappingInfo : NSObject
{
    NSString *mSheetName;
}

+ (id)mappingInfoWithSheetName:(id)arg1;
@property(readonly, nonatomic) NSString *sheetName; // @synthesize sheetName=mSheetName;
@property(readonly, nonatomic) int columnOffset;
@property(readonly, nonatomic) int rowOffset;
- (void)dealloc;
- (id)initWithSheetName:(id)arg1;

@end

