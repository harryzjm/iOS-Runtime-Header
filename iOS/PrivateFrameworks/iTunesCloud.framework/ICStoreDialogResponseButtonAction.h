//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface ICStoreDialogResponseButtonAction : NSObject <NSCopying>
{
    NSDictionary *_actionDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *actionDictionary; // @synthesize actionDictionary=_actionDictionary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *kind;
@property(readonly, copy, nonatomic) NSString *URLString;
@property(readonly, copy, nonatomic) NSString *subtarget;
@property(readonly, copy, nonatomic) NSString *itemName;
@property(readonly, copy, nonatomic) NSString *buyParams;
@property(readonly, nonatomic) long long type;
- (id)initWithResponseButtonActionDictionary:(id)arg1;

@end

