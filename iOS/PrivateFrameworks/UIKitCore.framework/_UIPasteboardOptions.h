//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface _UIPasteboardOptions : NSObject
{
    _Bool _pinned;
    _Bool _localOnly;
    NSDate *_expirationDate;
}

+ (id)optionsWithDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic, getter=isLocalOnly) _Bool localOnly; // @synthesize localOnly=_localOnly;
@property(nonatomic, getter=isPinned) _Bool pinned; // @synthesize pinned=_pinned;
- (id)initWithOptionsDictionary:(id)arg1;

@end
