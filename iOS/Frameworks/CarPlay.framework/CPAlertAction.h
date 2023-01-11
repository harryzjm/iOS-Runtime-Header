//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface CPAlertAction : NSObject <NSSecureCoding>
{
    NSString *_title;
    unsigned long long _style;
    CDUnknownBlockType _handler;
    NSUUID *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 style:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;

@end

