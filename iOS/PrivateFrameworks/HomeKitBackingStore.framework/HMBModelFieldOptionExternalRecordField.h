//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMBModelFieldOption.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface HMBModelFieldOptionExternalRecordField : HMBModelFieldOption
{
    _Bool _encrypted;
    NSString *_fieldName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (void)applyTo:(id)arg1;
- (id)initWithExternalRecordField:(id)arg1 encrypted:(_Bool)arg2;

@end

