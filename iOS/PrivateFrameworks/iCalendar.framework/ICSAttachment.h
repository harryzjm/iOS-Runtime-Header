//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ICSAttachment
{
}

- (_Bool)shouldObscureValue;
@property(retain, nonatomic) NSString *x_apple_ews_attachmentid;
@property(retain, nonatomic) NSString *x_apple_filename;
@property(retain, nonatomic) NSString *managed_filename;
@property(nonatomic) _Bool x_apple_autoarchived;
@property(retain, nonatomic) NSString *fmtype;
@property(retain, nonatomic) NSString *managed_id;
@property(nonatomic) int size;
- (id)filename;
- (_Bool)isBinary;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setData:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

