//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _MFEmailAddress : NSObject
{
    NSString *_address;
    NSString *_comment;
}

@property(readonly, copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *fullAddress;
- (id)initWithAddress:(id)arg1 comment:(id)arg2;

@end
