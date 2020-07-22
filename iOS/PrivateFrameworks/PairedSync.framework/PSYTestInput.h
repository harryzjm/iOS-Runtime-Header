//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PairedSync/NSSecureCoding-Protocol.h>

@interface PSYTestInput : NSObject <NSSecureCoding>
{
    long long _action;
}

+ (id)testInputWithAction:(long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
