//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRTextEditingAttributes, NSData;

@interface MRKeyboardMessage
{
    MRTextEditingAttributes *_attributes;
}

+ (id)encryptedMessageWithState:(unsigned long long)arg1 text:(id)arg2 attributes:(id)arg3 usingCryptoSession:(id)arg4;
- (id)decryptedTextUsingCryptoSession:(id)arg1;
- (unsigned long long)type;
@property(readonly, nonatomic) MRTextEditingAttributes *attributes;
@property(readonly, nonatomic) NSData *encryptedTextCyphertext;
@property(readonly, nonatomic) unsigned long long state;
- (void)dealloc;
- (id)initWithState:(unsigned long long)arg1 encryptedTextCyphertext:(id)arg2 attributes:(id)arg3;

@end
