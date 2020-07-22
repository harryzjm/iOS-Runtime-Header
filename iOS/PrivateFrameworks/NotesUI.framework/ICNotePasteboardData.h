//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesUI/NSSecureCoding-Protocol.h>

@class ICDataPersister, NSData;

@interface ICNotePasteboardData : NSObject <NSSecureCoding>
{
    NSData *_attributedStringData;
    ICDataPersister *_dataPersister;
}

+ (_Bool)supportsSecureCoding;
+ (id)pasteboardDataFromPersistenceData:(id)arg1 secureCoding:(_Bool)arg2;
+ (id)pasteboardDataFromPersistenceData:(id)arg1;
@property(readonly, nonatomic) ICDataPersister *dataPersister; // @synthesize dataPersister=_dataPersister;
@property(readonly, nonatomic) NSData *attributedStringData; // @synthesize attributedStringData=_attributedStringData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)persistenceData;
- (id)initWithAttributedStringData:(id)arg1 dataPersister:(id)arg2;
- (id)init;

@end
