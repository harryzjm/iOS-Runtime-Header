//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol NSObject><NSCopying;

@interface PKPencilTextInputElement : NSObject
{
    id <NSObject><NSCopying> _identifier;
    struct CGRect _frame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy, nonatomic) id <NSObject><NSCopying> identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)initWithIdentifier:(id)arg1 frame:(struct CGRect)arg2;

@end
