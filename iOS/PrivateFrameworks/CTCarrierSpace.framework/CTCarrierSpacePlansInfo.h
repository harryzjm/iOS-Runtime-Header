//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CTCarrierSpacePlansInfo : NSObject <NSSecureCoding>
{
    NSArray *_planGroupsList;
    NSString *_morePlansURL;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *morePlansURL; // @synthesize morePlansURL=_morePlansURL;
@property(retain, nonatomic) NSArray *planGroupsList; // @synthesize planGroupsList=_planGroupsList;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

