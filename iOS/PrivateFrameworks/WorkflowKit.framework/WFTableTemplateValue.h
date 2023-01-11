//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface WFTableTemplateValue : NSObject <NSSecureCoding>
{
    long long _compoundType;
    NSArray *_rows;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) long long compoundType; // @synthesize compoundType=_compoundType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompoundType:(long long)arg1 rows:(id)arg2;

@end
