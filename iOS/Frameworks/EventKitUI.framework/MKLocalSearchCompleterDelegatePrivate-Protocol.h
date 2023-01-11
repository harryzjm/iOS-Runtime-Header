//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/MKLocalSearchCompleterDelegate-Protocol.h>

@class MKLocalSearchCompleter, NSArray, NSError, NSString;
@protocol GEOMapServiceCompletionTicket;

@protocol MKLocalSearchCompleterDelegatePrivate <MKLocalSearchCompleterDelegate>

@optional
@property(retain, nonatomic) id <GEOMapServiceCompletionTicket> lastTicket;
- (void)completerDidAccessNetwork:(MKLocalSearchCompleter *)arg1;
- (void)completerWillAccessNetwork:(MKLocalSearchCompleter *)arg1;
- (void)completer:(MKLocalSearchCompleter *)arg1 didFailWithError:(NSError *)arg2 forQueryFragment:(NSString *)arg3;
- (void)completerDidFail:(MKLocalSearchCompleter *)arg1 error:(NSError *)arg2;
- (void)completer:(MKLocalSearchCompleter *)arg1 didUpdateResults:(NSArray *)arg2 forQueryFragment:(NSString *)arg3;
- (void)completerDidUpdateResults:(MKLocalSearchCompleter *)arg1 finished:(_Bool)arg2;
- (void)completerWillUpdateResults:(MKLocalSearchCompleter *)arg1;
@end

