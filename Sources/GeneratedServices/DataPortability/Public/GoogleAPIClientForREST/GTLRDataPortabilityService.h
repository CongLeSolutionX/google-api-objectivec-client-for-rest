// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Data Portability API (dataportability/v1beta)
// Description:
//   The Data Portability API lets you build applications that request
//   authorization from a user to move a copy of data from Google services into
//   your application. This enables data portability and facilitates switching
//   services.
// Documentation:
//   https://developers.google.com/data-portability

#import <GoogleAPIClientForREST/GTLRService.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: Move a copy of messages between you and the businesses
 *  you have conversations with.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.businessmessaging.conversations"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityBusinessmessagingConversations;
/**
 *  Authorization scope: Move a copy of your search activity.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.myactivity.search"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityMyactivitySearch;
/**
 *  Authorization scope: Move a copy of your Shopping activity.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.myactivity.shopping"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityMyactivityShopping;
/**
 *  Authorization scope: Move a copy of your YouTube activity.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.myactivity.youtube"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityMyactivityYoutube;
/**
 *  Authorization scope: Move a copy of your shipping information.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.shopping.addresses"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityShoppingAddresses;
/**
 *  Authorization scope: Move a copy of reviews you wrote about products or
 *  online stores.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.shopping.reviews"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityShoppingReviews;
/**
 *  Authorization scope: Move a copy of information about your channel.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.youtube.channel"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityYoutubeChannel;
/**
 *  Authorization scope: Move a copy of your comments.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.youtube.comments"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityYoutubeComments;
/**
 *  Authorization scope: Move a copy of your messages in live chat.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.youtube.live_chat"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityYoutubeLiveChat;
/**
 *  Authorization scope: Move a copy of your uploaded YouTube Music tracks and
 *  your YouTube Music library.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.youtube.music"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityYoutubeMusic;
/**
 *  Authorization scope: Move a copy of your private playlists.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.youtube.private_playlists"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityYoutubePrivatePlaylists;
/**
 *  Authorization scope: Move a copy of your private videos and information
 *  about them.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.youtube.private_videos"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityYoutubePrivateVideos;
/**
 *  Authorization scope: Move a copy of your public playlists.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.youtube.public_playlists"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityYoutubePublicPlaylists;
/**
 *  Authorization scope: Move a copy of your public videos and information about
 *  them.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.youtube.public_videos"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityYoutubePublicVideos;
/**
 *  Authorization scope: Move a copy of YouTube Shopping Wishlists, and wishlist
 *  items.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.youtube.shopping"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityYoutubeShopping;
/**
 *  Authorization scope: Move a copy of your channel subscriptions, even if
 *  they're private.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.youtube.subscriptions"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityYoutubeSubscriptions;
/**
 *  Authorization scope: Move a copy of your unlisted playlists.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.youtube.unlisted_playlists"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityYoutubeUnlistedPlaylists;
/**
 *  Authorization scope: Move a copy of your unlisted videos and information
 *  about them.
 *
 *  Value "https://www.googleapis.com/auth/dataportability.youtube.unlisted_videos"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeDataPortabilityYoutubeUnlistedVideos;

// ----------------------------------------------------------------------------
//   GTLRDataPortabilityService
//

/**
 *  Service for executing Data Portability API queries.
 *
 *  The Data Portability API lets you build applications that request
 *  authorization from a user to move a copy of data from Google services into
 *  your application. This enables data portability and facilitates switching
 *  services.
 */
@interface GTLRDataPortabilityService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRDataPortabilityQuery.h. The query can the be sent with GTLRService's
// execute methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop