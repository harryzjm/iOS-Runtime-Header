//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MailKit/NSSecureCoding-Protocol.h>

@interface MEMessageActionFlagChange : NSObject <NSSecureCoding>
{
    long long _flag;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long flag; // @synthesize flag=_flag;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlag:(long long)arg1;

@end
