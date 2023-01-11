//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OADTableStyleCollection : NSObject
{
    NSMutableArray *_styles;
    NSMutableDictionary *_styleMap;
    NSString *_defaultTableStyleId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *defaultTableStyleId; // @synthesize defaultTableStyleId=_defaultTableStyleId;
- (id)tableStyleWithId:(id)arg1;
- (id)tableStyles;
- (void)addTableStyle:(id)arg1;
- (id)init;

@end
