//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class NSString;

@interface CPInformationItem : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_detail;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)initWithTitle:(id)arg1 detail:(id)arg2;

@end
