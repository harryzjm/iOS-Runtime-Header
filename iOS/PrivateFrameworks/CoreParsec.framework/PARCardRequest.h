//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSURL;

@interface PARCardRequest <NSSecureCoding>
{
    NSURL *_cardURL;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSURL *cardURL; // @synthesize cardURL=_cardURL;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
