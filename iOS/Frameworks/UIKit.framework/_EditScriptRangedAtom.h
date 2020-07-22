//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EditScriptRangedAtom : NSObject
{
    NSString *_replacementText;
    struct _NSRange _editRange;
}

+ (id)atomWithEditRange:(struct _NSRange)arg1 replacementText:(id)arg2;
@property(retain, nonatomic) NSString *replacementText; // @synthesize replacementText=_replacementText;
@property(nonatomic) struct _NSRange editRange; // @synthesize editRange=_editRange;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEditRange:(struct _NSRange)arg1 replacementText:(id)arg2;

@end
